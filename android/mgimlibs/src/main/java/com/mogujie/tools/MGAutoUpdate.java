package com.mogujie.tools;

import android.app.ProgressDialog;
import android.content.Context;
import android.content.DialogInterface;
import android.content.DialogInterface.OnCancelListener;
import android.content.Intent;
import android.net.Uri;
import android.os.Environment;
import android.os.Handler;
import android.os.Message;

import com.mogujie.im.libs.R;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;

/**
 * 自动下载更新,~
 * @author 6a209
 * Feb 17, 2013
 */
public class MGAutoUpdate {  
	private Context mCtx;
	private ProgressDialog mProgressDialog;
	private long mCount;
	private static final int UPDATE = 0x01;
    private Handler mHandler = new Handler(){
    	@Override
    	public void handleMessage(Message msg){
    		switch(msg.what){
    		case UPDATE:
    			mProgressDialog.setProgress((int)(mCount / 1000));
    			break;
    		}
    	}
    };
    
    private boolean isCancle = false;
    private UpdateOnCancleListener updateOnCancleListener;
    private OnUpdateFinishListener mUpdateFinishListener;
  
    public MGAutoUpdate(Context ctx) {  
    	 mCtx = ctx;
    	 mProgressDialog = new ProgressDialog(mCtx);
         mProgressDialog.setTitle(R.string.downloading);
         mProgressDialog.setMessage(mCtx.getString(R.string.wait_moment));
         mProgressDialog.setProgressStyle(ProgressDialog.STYLE_HORIZONTAL);
         //默认100
         mProgressDialog.setMax(100);
         mProgressDialog.show();
         mProgressDialog.setOnCancelListener(new OnCancelListener() {
			@Override
			public void onCancel(DialogInterface dialog) {
				if(null != updateOnCancleListener){
					isCancle = true;
					updateOnCancleListener.cancel();
				}
			}
		});
    }  
    
    void down() {  
        mHandler.post(new Runnable() {  
            public void run() {  
                update();  
            }  
        });  
    }  
  
    void update() {
    	if(mProgressDialog.isShowing()){
        	mProgressDialog.dismiss();
    	}
    	
    	if(isCancle){
    		return;
    	}
        if(null != mUpdateFinishListener){
            mUpdateFinishListener.onFinish();
        }
        Intent intent = new Intent(Intent.ACTION_VIEW);  
        intent.setDataAndType(Uri.fromFile(new File("/sdcard/OA.apk")),  
                "application/vnd.android.package-archive");  
        mCtx.startActivity(intent); 
    }  
    
    public void setUpdateOnCancleListener(UpdateOnCancleListener updateOnCancleListener){
    	this.updateOnCancleListener = updateOnCancleListener;
    }

    public void setOnFinishListener(OnUpdateFinishListener listener){
        mUpdateFinishListener = listener;
    }
    
    public interface UpdateOnCancleListener {
    	public void cancel();
    }

    public interface OnUpdateFinishListener{
        public void onFinish();
    }
  
}  