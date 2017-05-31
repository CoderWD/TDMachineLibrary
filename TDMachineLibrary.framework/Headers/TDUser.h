//
//  TDUser.h
//  TDMachine
//
//  Created by 何伟东 on 2017/3/27.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDUser : NSObject

@property(nonatomic,assign) int COLLECTIONNUM;
@property(nonatomic,assign) int MESSAGENUM;
@property(nonatomic,strong) NSString *CREATEDATE;
@property(nonatomic,strong) NSString *DEALNUM;
@property(nonatomic,strong) NSString *DEVICE_CODE;
@property(nonatomic,strong) NSString *ENDLOGINTIME;
@property(nonatomic,strong) NSString *FULLNAME;
@property(nonatomic,strong) NSString *HEADIMGURL;
@property(nonatomic,strong) NSString *ID;
@property(nonatomic,strong) NSString *INSALENUM;
@property(nonatomic,strong) NSString *REALNAME;
@property(nonatomic,strong) NSString *SEX;
@property(nonatomic,strong) NSString *TELEPHONE;
@property(nonatomic,strong) NSString *USERSTATUS;
@property(nonatomic,strong) NSString *USERTOKEN;
@property(nonatomic,strong) NSString *VIPCODE;

@end
