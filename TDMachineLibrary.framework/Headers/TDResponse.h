//
//  TDResponse.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/7.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDResponse : NSObject

@property(nonatomic,assign) int status;
@property(nonatomic,strong) NSString *msg;

/**
 集合对象
 */
@property(nonatomic,strong) NSMutableArray *dataset_line;

/**
 对象
 */
@property(nonatomic,strong) NSMutableDictionary *dataset;

@property(nonatomic,strong) NSMutableDictionary *dataMapList;

/**
 原始为改造的数据
 */
@property(nonatomic,strong) id rawData;

@end
