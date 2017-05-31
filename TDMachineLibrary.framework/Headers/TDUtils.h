//
//  TDUtils.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/15.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDUtils : NSObject

/**
 *  时间转换成几分钟前类
 *
 *  @param date <#time description#>
 *
 *  @return <#return value description#>
 */
+(NSString *)dateIntervalToNowWithDate:(NSDate *)date;

/**
 字符串时间转NSDate
 
 @param stringDate <#stringDate description#>
 @param formatter yyyy-MM-dd HH:mm:ss
 */
+(NSDate*)stringDateToDate:(NSString*)stringDate formatter:(NSString*)formatter;


+(NSDictionary*)dictionaryWithJsonString:(NSString*)jsonString;

@end
