//
//  CVector3.h
//  Baby
//
//  Created by 曹 迪 on 12-8-14.
//  Copyright (c) 2012年 曹 迪. All rights reserved.
//


/*************************************************
 Copyright:版权归曹迪所有
 Author:曹 迪
 Date:2012-08-14
 Description:向量类
 **************************************************/

#ifndef __Baby__CVector3__
#define __Baby__CVector3__

#include <iostream>



class CVector3{

public:
    /*************************************************
     Function:       CVector3
     Description:    构造函数
     Calls:          // 被本函数调用的函数清单
     Input:          
     Output:         
     Return:         
     Others:         默认实现
     *************************************************/
    CVector3() = default;
    
    CVector3(const CVector3&) = default;
    
    CVector3(float x, float y, float z);
    
    CVector3 &operator = (const CVector3 &vector);
    
    bool operator == (const CVector3 &vector)const;
    
    bool operator != (const CVector3 &vector)const;
    
    CVector3 add(const CVector3 &vector)const;
    
    CVector3 subtract(const CVector3 &vector)const;
    
    CVector3 multiply(float scalar)const;
    
    CVector3 divide(float scalar)const;
    
    CVector3 operator + (const CVector3 &vector)const;
    
    CVector3 operator - (const CVector3 &vector)const;
    
    CVector3 operator * (float scalar)const;
    
    CVector3 operator / (float scalar)const;
    
    CVector3 &operator += (const CVector3 &vector);
    
    CVector3 &operator -= (const CVector3 &vector);
    
    CVector3 &operator *= (float scaler);
    
    CVector3 &operator /= (float scaler);
    
    /*************************************************
     Function:       length
     Description:    求向量模
     Calls:          // 被本函数调用的函数清单
     Return:         返回向量长度
     Others:        
     *************************************************/
    float length();
    
    void normalize();
    
    void zero();
    
    /*************************************************
     Function:       dot
     Description:    点积
     Input:             
     Calls:          // 被本函数调用的函数清单
     Return:         点积结果
     *************************************************/
    float dot(const CVector3 &vector)const;
    
    CVector3 cross(const CVector3 &vectorA, const CVector3 &vectorB);
 
    float distance(const CVector3 &vectorA, const CVector3 &vectorB);
    
    
    
public:
    
    float x = 0;
    
    float y = 0;
    
    float z = 0;

};


#endif /* defined(__Baby__CVector3__) */
