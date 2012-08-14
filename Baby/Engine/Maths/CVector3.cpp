//
//  CVector3.cpp
//  Baby
//
//  Created by 曹 迪 on 12-8-14.
//  Copyright (c) 2012年 曹 迪. All rights reserved.
//

#include "CVector3.h"

#include <math.h>

CVector3::CVector3(float x, float y, float z){
    
    (*this).x = x;
    (*this).y = y;
    (*this).z = z;
}

CVector3& CVector3::operator = (const CVector3 &vector){
    
    x = vector.x;
    y = vector.y;
    z = vector.z;
    
    return *this;
}

bool CVector3::operator == (const CVector3 &vector)const{
    
    return x == vector.x && y == vector.y && z == vector.z;
}

bool CVector3::operator != (const CVector3 &vector)const{
    
    return x != vector.x || y != vector.y || z != vector.z;
}

CVector3 CVector3::add(const CVector3 &vector)const{

    return CVector3(x + vector.x, y + vector.y, z + vector.z);
}

CVector3 CVector3::subtract(const CVector3 &vector)const{
    
    return CVector3(x - vector.x, y - vector.y, z - vector.z);
}

CVector3 CVector3::multiply(float scalar)const{
    
    return CVector3(x * scalar, y * scalar, z * scalar);
}

CVector3 CVector3::divide(float scalar)const{

    float oneOverScalar = 1.0f / scalar;
    
    return multiply(oneOverScalar);
}

CVector3 CVector3::operator + (const CVector3 &vector)const{

    return add(vector);
}

CVector3 CVector3::operator - (const CVector3 &vector)const{
    
    return subtract(vector);
}

CVector3 CVector3::operator * (float scalar)const{
    
    return multiply(scalar);
}

CVector3 CVector3::operator / (float scalar)const{

    return divide(scalar);
}

CVector3& CVector3::operator += (const CVector3 &vector){

    x += vector.x;
    y += vector.y;
    z += vector.z;
    
    return *this;
}

CVector3& CVector3::operator -= (const CVector3 &vector){

    x -= vector.x;
    y -= vector.y;
    z -= vector.z;
    
    return *this;
}

CVector3& CVector3::operator *= (float scaler){
    
    x *= scaler;
    y *= scaler;
    y *= scaler;
    
    return *this;
}

CVector3& CVector3::operator /= (float scaler){

    float oneOverScaler = 1.0f / scaler;
    
    return (*this) *= (oneOverScaler);
}

float CVector3::length(){
    
    return sqrtf(x * x + y * y + z * z);
}

void CVector3::normalize(){

    float l =length();
    if( l > 0 ){
        float oneOverLength = 1.0f / l;
        x *= oneOverLength;
        y *= oneOverLength;
        z *= oneOverLength;
    }
    
}

void CVector3::zero(){
    
    x = y = z = 0.0f;
}

float CVector3::dot(const CVector3 &vector)const{
    
    return x * vector.x + y * vector.y + z * vector.z;
}

CVector3 CVector3::cross(const CVector3 &vectorA, const CVector3 &vectorB){
    
    return CVector3(
                    vectorA.y * vectorB.z - vectorA.z * vectorB.y,
                    vectorA.z * vectorB.x - vectorA.x * vectorB.z,
                    vectorA.x * vectorB.y - vectorA.y * vectorB.x
    );
}

float distance(const CVector3 &vectorA, const CVector3 &vectorB){

    float dx = vectorA.x - vectorB.x;
    float dy = vectorA.y - vectorB.y;
    float dz = vectorA.z - vectorB.z;
    
    return sqrtf(dx * dx + dy * dy + dz * dz);
}



