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
    
    //<summar>
    //构造函数
    //</summary>
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
    

    float length();
    
    void normalize();
    
    void zero();
    
    float dot(const CVector3 &vector)const;
    
    
    //<summary>向量叉乘</summary>
    //<param name="vectorA">向量A</param>
    //<param name="vectorB">向量B</param>
    //<returns>同时垂直与向量A和向量B的向量</returns>
    
    CVector3 cross(const CVector3 &vectorA, const CVector3 &vectorB);
 
    float distance(const CVector3 &vectorA, const CVector3 &vectorB);
    
    
    
public:
    
    float x = 0;
    
    float y = 0;
    
    float z = 0;

};


#endif /* defined(__Baby__CVector3__) */
