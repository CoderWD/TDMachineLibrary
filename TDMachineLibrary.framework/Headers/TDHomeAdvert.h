//
//  TDHomeAdvert.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/13.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDHomeAdvert : NSObject
@property(nonatomic,strong) NSString *ADVERTISEMENT_ID;
@property(nonatomic,strong) NSString *IMAGEURL;
@property(nonatomic,assign) BOOL ISLOGIN;
@property(nonatomic,strong) NSString *JUMPURL;
@property(nonatomic,strong) NSString *TYPE;


@end
