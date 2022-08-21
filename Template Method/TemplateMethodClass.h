/**
 * @file TemplateMethodClass.h
 * @brief 
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

#ifndef __TEMPLATE_20METHOD_TEMPLATEMETHODCLASS_H_
#define __TEMPLATE_20METHOD_TEMPLATEMETHODCLASS_H_
/**
 * @brief 
 */
class TemplateClass
{
public:
    void Run();
protected:
    virtual void step2()=0;
    virtual void step4()=0;
private:
    void step1();
    void step3();
}

#endif /* __TEMPLATE_20METHOD_TEMPLATEMETHODCLASS_H_ */
