//
//  TDConfiguration.h
//  TDMachineLibrary
//
//  Created by 何伟东 on 2017/6/1.
//  Copyright © 2017年 CoderHe. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDConfiguration : NSObject

+(TDConfiguration*)shareInstance;
/**
 是否为debug环境
 */
@property(nonatomic,assign) BOOL isDebug;

@end
