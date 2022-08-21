/**
 * @file Application.cpp
 * @brief 模板方法
 * @author AaronBin (1131518393@qq.com)
 * @version 1.0
 * @date 2022-08-21
 * 
 * @copyright Copyright (c) 2022  by AaronBin
 * 
 * @par 修改日志:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2022-08-21     <td>1.0     <td>AaronBin   <td>内容
 * </table>
 */

#include"ConcreteTemplateClass.h"
#include<iostream>
using namespace std;

int main()
{
    TemplateClass* obj= new ConcreteClass;
    obj->Run();
    return 0;

}