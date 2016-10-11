# EmoKit_Apple-Watch_SDK

# 1.概述

此sdk是watch OS的sdk，需要在watch Extension 扩展里使用。可实现apple watch 光学检测心率，并获取依据心率识别出的情绪结果。



# 2.初始化配置

初始化时候需要配置从开发者中心（http://dev.emokit.com/）申请的AID和KEY。然后在watch Extension扩展的ExtensionDelegate.m文件里的applicationDidFinishLaunching方法里添加如下代码:
[WKEmoKitManager startAppKey:申请的Key AppId:申请的Aid];



# 3.心率检测并且获取情绪结果

详情查看开发文档



# 4.附录

（1）错误码列表
错误值	含义
200	结果返回成功

（2）情绪识别结果码表（7种）。
注：5种、24种情绪结果详见情绪结果码表文档

标签代码	情绪描述	英文
K	平静；放松；专注；出神；	Calm
D	忧愁；疑惑；迷茫；无助；	Confused
C	伤感；郁闷；痛心；压抑；	Sad
Y	生气；失控；兴奋；宣泄；	Angry
M	开心；甜蜜；欢快；舒畅；	Happy
W	害怕；焦虑；紧张；激情；	Surprised
T	厌恶；反感；意外；惊讶；	Disgust
 

（3）联系方式
feedback@emokit.com
