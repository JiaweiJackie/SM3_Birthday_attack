# SM3_Birthday_attack

个人完成。

# 原理简介

在大二下的密码学引论课程中已经对生日攻击进行了说明介绍，如下图所示：

![image](https://user-images.githubusercontent.com/105580300/181920599-aca9d4d8-d42f-42d9-9166-27133c389d3d.png)



# 代码解释
利用生日攻击找n比特碰撞的原像，对于任意消息（这里只考虑数字字符串，其他字符串也可以转化到数字字符串）M，我们计算H=SM3(M)，如果我们只考虑前n比特（下文中的相等都是指前n比特），那么在前0-2^n范围内，至少存在一组碰撞的概率几乎是100%。

只比较前16比特，若前16比特完全相同，则认为攻击成功，否则，攻击失败。

![image](https://user-images.githubusercontent.com/105580300/181920653-85de3433-37fd-4ab2-a0c5-9807e1968780.png)

SM3加密函数：

![image](https://user-images.githubusercontent.com/105580300/181920737-6a0555aa-0c75-40f9-8209-a1387dbaf976.png)

将原消息的长度填充成512比特的倍数：

![image](https://user-images.githubusercontent.com/105580300/181920786-eb145f07-eb2e-41af-9413-de32ef6af694.png)


# 执行结果

直接点击运行即可：

![image](https://user-images.githubusercontent.com/105580300/181920413-5807dc4d-0aa2-41e9-bb72-aedd2cf5a1eb.png)


至此，执行成功！
