//
//  NSObject+TD.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/13.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (TD)
/**
 获取对象的所有属性，不包括属性值
 
 @return <#return value description#>
 */
- (NSArray *)allProperties;

/**
 获取对象的所有属性 以及属性值
 
 @return <#return value description#>
 */
- (NSDictionary *)allPropertiesAndValue;

@end
