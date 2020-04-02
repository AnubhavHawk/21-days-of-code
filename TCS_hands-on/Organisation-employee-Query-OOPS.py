#!/bin/python3

import math
import os
import random
import re
import sys


#Enter your code here. Read input from STDIN. Print output to STDOUT
class Employee():
    def __init__(self, name, id, age, gender):
        self.name = name
        self.id = id
        self.age = age
        self.gender = gender
    def getId(self):
        return self.id
        
class Organisation():
    def __init__(self, name, eList):
        self.name = name
        self.eList = eList
    def addEmployee(self, name, id, age, gender):
        e = Employee(name, id, age, gender)
        self.eList.append({'id':e})
    def getEmployeeCount(self):
        return len(self.eList)
    def findEmployeeAge(self, id):
        for i in range(self.getEmployeeCount()):
            if(o.eList[i]['id'].getId() == id):
                return o.eList[i]['id'].age
        return -1
    def countEmployees(self, age):
        count = 0
        for i in range(self.getEmployeeCount()):
            
            if(self.eList[i]['id'].age > age):
                count += 1
        return count

if __name__ == '__main__':
    employees=[]
    o = Organisation('XYZ',employees)
    n=int(input())
    for i in range(n):
        name=input()
        id=int(input())
        age=int(input())
        gender=input()
        o.addEmployee(name,id,age,gender)

    id=int(input())
    age=int(input())
    print(o.getEmployeeCount())
    print(o.findEmployeeAge(id))
    print(o.countEmployees(age))