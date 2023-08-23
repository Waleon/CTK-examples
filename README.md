# 系列介绍

OSGI 技术是面向 Java 的动态模型系统。Java 圈子里有非常著名的一句话：OSGI - 架构师的天堂。换句话说，OSGI 能让软件开发变得更加容易！

值得庆幸的是，在 C++ 中也有类似的框架 - CTK Plugin Framework。它借鉴了 OSGI 的思想，并实现了几乎完整的 OSGI 框架 API！

![image](https://raw.githubusercontent.com/Waleon/CTK/master/CTK.png)

在通往架构师的道路上，不仅需要了解面向组件（或服务）的设计和实现，更应当了解其背后的原理。本课程，我们将主要围绕 CTK，探索 C++ 中的模块化技术。希望通过分享的知识，大家能够了解 OSGI 内部的工作机制，并能够基于 CTK 快速搭建 C++ 组件化框架。

# 系列内容

本系列文章共包含四大部分：

- 第一部分（第 1 ~ 3 节）：入门篇，初步了解，包括框架选择标准、OSGI 和 CTK 之间的关系、CTK 的优势解析及基础初探。
- 第二部分（第 4 ~ 10 节）：进阶篇，开始使用，包括开发环境的搭建，CTK 的编译、插件的创建、以及如何在程序中嵌入插件框架等功能。
- 第三部分（第 11 ~ 17 节）：高级篇，掌握核心，CTK 事件管理机制、日志管理、服务追踪、事件与监听等功能。
- 第四部分（第 18 节）：总结篇 ，FAQ 常见问题，针对 CTK 中的常见问题进行快速分析，并给出最合理的解决方案。

以下是各个部分的具体内容，以及示例源码：

文章地址 | 示例源码
:--- | :---
1. [初识 CTK](https://waleon.blog.csdn.net/article/details/78411399)  | ---
2. [漫谈 CTK](https://waleon.blog.csdn.net/article/details/129093702)  | ---
3. [CTK Plugin Framework 基本原理](https://waleon.blog.csdn.net/article/details/129093925)  | ---
4. [编译 CTK](https://waleon.blog.csdn.net/article/details/78411600)  | ---
5. [使用 CTKWidgets](https://waleon.blog.csdn.net/article/details/78411757)  | UseCTKWidgets
6. [Hello，CTK！](https://waleon.blog.csdn.net/article/details/78411930)  | HelloCTK
7. [在程序中嵌入 CTK Plugin Framework](https://waleon.blog.csdn.net/article/details/78414715)  | EmbedCTK
8. [CTK 插件元数据](https://waleon.blog.csdn.net/article/details/129103894)  | GetMetaData
9. [CTK 插件和服务](https://waleon.blog.csdn.net/article/details/129104241) | PluginAndService
10. [CTK 插件之间的依赖](https://waleon.blog.csdn.net/article/details/129104422)  | RequirePlugin
11. [CTK 事件管理机制（插件间通信）](https://waleon.blog.csdn.net/article/details/78455299)  | ---
12. [CTK 事件管理机制（sendEvent/postEvent）](https://waleon.blog.csdn.net/article/details/129105031)  | EventAdmin/SendEvent
13. [CTK 事件管理机制（signal/slot）](https://waleon.blog.csdn.net/article/details/78458574)  | EventAdmin/SignalSlot
14. [CTK 服务工厂](https://waleon.blog.csdn.net/article/details/78479946)  | ServiceFactory
15. [CTK 事件与监听](https://waleon.blog.csdn.net/article/details/78501940)  | EventListener
16. [CTK 服务追踪](https://waleon.blog.csdn.net/article/details/78849626)  | ServiceTracker
17. [访问 CTK 服务的最佳方式](https://waleon.blog.csdn.net/article/details/103612915) | ---
18. [CTK 总结篇（FAQ）](https://waleon.blog.csdn.net/article/details/103613082)  | ---

# 适宜人群

- C++/Qt 中高级开发工程师、架构师
- 专注于模块化协作的开发者
- 希望能快速掌握 CTK 的开发者

# 系列地址

各位小伙伴们，欢迎猛戳：

- 系列地址：[Qt 企业级开发](https://waleon.blog.csdn.net/category_9836077.html)

# 关于作者

作者：[一去、二三里](https://waleon.blog.csdn.net/)，爱编程、爱学习、爱生活！

- [个人博客](https://waleon.blog.csdn.net/)
- 个人微信：iwaleon（加我微信，邀请入 500 人微信群）
- 个人 QQ：550755606
- QQ 技术交流群：242790253

更多干货，请扫码关注我的微信公众号，不要太惊喜哦~

![微信公众号](https://raw.githubusercontent.com/Waleon/DesignPatterns/master/assets/qrcode.jpg)
