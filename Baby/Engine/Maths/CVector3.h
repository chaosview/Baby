//
//  CVector3.h
//  Baby
//
//  Created by 曹 迪 on 12-8-14.
//  Copyright (c) 2012年 曹 迪. All rights reserved.
//

#ifndef __Baby__CVector3__
#define __Baby__CVector3__

#include <iostream>



class CVector3{

public:
    
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
    
    CVector3 &operator *= (const CVector3 &vector);
    
    CVector3 &operator /= (const CVector3 &vector);
    
    void normalize();
    
    float length();
    
    float dot(const CVector3 &vector)const;
    
    CVector3 cross(const CVector3 &vectorA, const CVector3 &vectorB);
 
    float distance(const CVector3 &vectorA, const CVector3 &vectorB);
    
    
    
public:
    
    float x = 0;
    
    float y = 0;
    
    float z = 0;

};


#endif /* defined(__Baby__CVector3__) */
