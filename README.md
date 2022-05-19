# TeamTalk

opensource im from mogojie(蘑菇街), this is a branch, see [origin](https://github.com/meili/TeamTalk)

![teamtalk-screenhost](./doc/teamtalk-screenhost.jpeg)

![server-arch1](./doc/server-arch1.jpeg)

![server-arch2](./doc/server-arch2.jpg)

![install-local](./doc/install-local.png)


## Structure

- mac：TTMacClient工程，mac客户端工程
- iOS：TTIOSClient工程，IOS客户端工程
- Android：TTAndroidClient工程，android客户端工程
- Windows：TTWinClient工程，windows客户端工程
- Server: C++服务端工程 
    - login_server(C++): 负载均衡服务器（HTTP Server），根据最小连接算法，返回一个在线用户少MsgServer给客户端使用（主要是IP地址和端口）
    - msg_server(C++): 消息服务器（TCP Server），接收来自于客户端的TCP连接，转发客户端信令到db_proxy_server处理
    - route_server(C++): 路由服务器，为登录在不同MsgServer的用户提供消息转发功能
    - file_server(C++): 文件服务器，提供客户端之间得文件传输服务，支持在线以及离线文件传输
    - msfs_server(C++): 图片存储服务器，提供头像，图片传输中的图片存储服务
    - db_proxy_server(C++): 数据库代理服务器，提供mysql以及redis的访问服务，屏蔽其他服务器与mysql与redis的直接交互

## Build

server：参考 [README.md](./server/src/README.md)
windows: 参考 [README.md](./win-client/README.md)

## Run
 