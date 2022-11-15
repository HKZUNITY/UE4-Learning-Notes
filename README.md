# UE4-Learning-Notes
 
| 题目 | 内容 | 介绍 |  
| --- | --- | --- |  
| FirstTask | 第一次作业 | 链接：https://pan.baidu.com/s/12bFurj0QL_DJMUlZE0_2Bg 提取码：1111 |  
| SecondTask | 第二次作业 | 链接：https://pan.baidu.com/s/18l79jzwVPwLk46_e0YfZjQ 提取码：1111 说明： R加子弹，鼠标右键举枪，左键开火，鼠标移动控制Player视野； 瞄准镜头移动，人物上下视角限制，枪械后坐力； 各自Player打击飞行的帽子和敌人，各自得分，支持网络同步； Player1在房间时，时间在减少，待Player2进入房间后， 时间是Player1进入时所剩时间，时间支持网络同步； UI显示排行榜网络同步。 |  
| ThirdTask | 第三次作业 | NULL |  
| FourTask | 第四次作业 | 链接：https://pan.baidu.com/s/1m8HGTCDAQHlc1BnSFPGsGw 提取码：1111 说明： 1.在游戏界面可更改人物名字，人物后面对应各自得分（名字和分数都保存本地）。 2.局域网下玩家可进入同一房间进行游戏，每局游戏结束所有玩家进行得分排行。 3.游戏界面含有人物移动遥感，人物视野遥感，瞄准发射子弹，加子弹，返回按钮。 |  
| FiveTask | 第五次作业 | 链接：https://pan.baidu.com/s/1GEnKdS1-50QKK_ONeP3Kag 提取码：1111 在原来Demo的基础上： 1.实现了Idle，Walk，Run和Jump的动作表现（W-A-S-D-Shift-Space控制其表现）。 2.实现了角色的俯仰表现（鼠标控制视野）。 3.实现了武器开火表现（按鼠标右键进行视野前移并播放瞄准动画，瞄准时按下鼠标左键松开后开火，播放开火动画）。 4.实现了角色近战拳击表现(鼠标左键进行拳击动画)。 5.实现了当按下Alt键时，可以实现自由视角功能，即角色不随视角左右进行旋转，但角色的头部可以跟随视角上下左右朝向。 |  
| SixTask | 第六次作业 | 链接：https://pan.baidu.com/s/1_a0o27Xk8EQoMlp0k3wRTg 提取码：1111  在原来Demo的基础上： 1、实现了脚印及脚步声的功能(在不同材质下播放不同的脚步声，同一材质下有walk和run两种音效)。 2、实现了枪械的pick功能(Player在持有Gun时可以瞄准开火、按下B键丢掉Gun，不持有Gun时无法进行瞄准和开发； 当Player屏幕视野准星移动到地下的Gun时，会弹出可以按F捡枪的Text，按下F即可捡枪进行瞄准开火)。 3、实现抛体枪械(按下G键手雷按抛物线抛出，手雷爆炸范围判定和距离检测)。 |  
| SevenTask | 第七次作业 | 链接：https://pan.baidu.com/s/1Yay8yHvYo_IBi6NaaECxSA 提取码：1111 在原来Demo的基础上： 实现一个玩家作为主机，其他玩家可在局域网内搜索房间并加入。 实现房间内玩家可自由交战（移动，瞄准射击）。 实现死亡时有死亡表现（模拟物理），死亡后弹出5秒倒计时重生UI。 实现10分钟后结算界面（这里为了测试改成了600秒开始到540秒结算）。玩家各自击杀数，死亡数（击杀数排行）。 |  
| EightTask | 第八次作业 | 链接：https://pan.baidu.com/s/1I5d37_e0S0dmXD3bRHB4Xw 提取码：1111 在原来Demo的基础上添加了 透明和半透明材质（玻璃效果）、 粒子特效（场景内下雪）、 添加蓝图逻辑控制场景内建筑物材质变化（UI控制）、 后处理效果。 |  
| NineTask | 第九次作业 | 链接：https://pan.baidu.com/s/1sTtTtNL-RZzDMKsx32eSTQ 提取码：1111 AI敌人和玩家相互射击： 寻敌:在场景中自动搜寻目标、 移动:移动到某个位置或者目标对象、 开火:锁定敌人,进行开火攻击、 躲避:被玩家攻击,逃离到安全位置、 |  
| BigTask | 大作业 | 链接：https://pan.baidu.com/s/1ZRemtOS7sBJE_fqKrDiYOA 提取码：1111 由于个人时间关系只做了PC端的大作业内容的部分功能，第一次接触unrealengine利用最近所学知识尽可能完成了以下功能： 附近物品-左键拖动拾取-右键直接拾取、背包-左键拖动丢弃-右键直接使用、鼠标悬停物品上显示物品信息、显示已装备的枪械位置，人物状态。 游戏界面操作：H显示帮助、tab打开背包、v切换人称（第一第三人称视角）、c蹲下、t显示任务、alt移动视角、shift加速、r换单、 鼠标左右键射击瞄准，滑轮切换武器、y丢掉手中武器开始近战、123切换武器、4收起开始近战。 每过十秒会在地图四个角落随机刷新一只僵尸，僵尸每过一分钟会进入狂暴模式，狂暴模式下僵尸会主动攻击位于地图中心的水晶，狂暴模式会持续一分钟。 玩家拥有血量，饱食度，饥渴值，体力值等属性，通过使用相应道具恢复对应属性，或者等待自动恢复。 击败僵尸会有一定几率掉落补给品和枪支。 地图中的阀门会在一段时间内升级和降落，这将有效阻止僵尸通过。 地图中的太阳位置会随着时间的变化而变化。 |  
| --- | --- | --- |  