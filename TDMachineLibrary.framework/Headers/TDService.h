//
//  TDService.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/7.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TDResponse.h"
#define TDSERVICE [TDService shareInstance]
#define TD_SERVER_URL(suffix) [TDService serviceUrlWithSuffix:suffix]
//#define TD_IMAGE_URL(suffix) [NSURL URLWithString:[TD_SERVER_URL(@"/usedcar/") stringByAppendingString:suffix]]

typedef void(^MGServiceSuccessHandle)(TDResponse *response);
typedef void(^MGServiceFailureHandle)(TDResponse *response,NSError *error);


@protocol TDServiceDelegate<NSObject>

@required

/**
 服务器url
 
 @return <#return value description#>
 */
-(NSString*)serviceUrl;

/**
 获取用户token
 
 @return <#return value description#>
 */
-(NSString*)fetchUserToken;

/**
 获取用户id
 
 @return <#return value description#>
 */
-(NSString*)fetchUserId;

/**
 获取结构accesstoken
 
 @return <#return value description#>
 */
-(NSString*)fetchAccesstoken;

/**
 退出登录
 */
-(void)loginOut;

@end

@interface TDService : NSObject

+(TDService*)shareInstance;

@property(nonatomic,assign) id<TDServiceDelegate> delegate;


/**
 获取服务器url
 
 @return <#return value description#>
 */
+(NSString*)serviceUrlWithSuffix:(NSString*)suffix;


-(void)postWithParameter:(NSMutableDictionary*)parameter url:(NSString*)url
           successHandle:(MGServiceSuccessHandle)successHandle
           failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 获取登录验证码
 
 @param phone <#phone description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)verifyCodeWithPhone:(NSString*)phone
             successHandle:(MGServiceSuccessHandle)successHandle
             failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 登录
 
 @param phone <#phone description#>
 @param code <#code description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)loginWithPhone:(NSString*)phone
                 code:(NSString*)code
        successHandle:(MGServiceSuccessHandle)successHandle
        failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 获取热门车型
 
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)hotCarTypesWithSuccessHandle:(MGServiceSuccessHandle)successHandle
                      failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 热门品牌
 
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)hotBrandsWithSuccessHandle:(MGServiceSuccessHandle)successHandle
                    failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 获取全部机型、品牌、型号【POST】
 
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)allBrandAndModelsWithSuccessHandle:(MGServiceSuccessHandle)successHandle
                            failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 获取省市区信息
 
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)provinceAndCitysWithSuccessHandle:(MGServiceSuccessHandle)successHandle
                           failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 获取广告信息
 
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)homeAdvertWithSuccessHandle:(MGServiceSuccessHandle)successHandle
                     failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 退出登录【POST】
 
 @param userId <#userId description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)loginOutWithUserId:(NSString*)userId
            SuccessHandle:(MGServiceSuccessHandle)successHandle
            failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 根据USER_ID查找用户信息 【POST】
 
 @param userId <#userId description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)userInfoWithUserId:(NSString*)userId
            SuccessHandle:(MGServiceSuccessHandle)successHandle
            failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 根据USER_ID修改用户信息【POST】
 
 @param userId <#userId description#>
 @param realName <#realName description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)editeUserNameWithUserId:(NSString*)userId
                      realName:(NSString*)realName
                 SuccessHandle:(MGServiceSuccessHandle)successHandle
                 failureHandle:(MGServiceFailureHandle)failureHandle;



/**
 获取初始化区间数据
 
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)iniDataWithSuccessHandle:(MGServiceSuccessHandle)successHandle
                  failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 买车
 
 @param parameters <#parameters description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)buyCarWithParameter:(NSMutableDictionary*)parameters successHandle:(MGServiceSuccessHandle)successHandle
             failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 修改头像

 @param userId <#userId description#>
 @param avatar <#avatar description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)editeUserInfoWithUserId:(NSString*)userId
                        avatar:(UIImage*)avatar
                 successHandle:(MGServiceSuccessHandle)successHandle
                 failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 修改用户真实姓名
 
 @param userId <#userId description#>
 @param realName <#realName description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)editUserRealNameWithUserId:(NSString*)userId
                         realName:(NSString*)realName
                    successHandle:(MGServiceSuccessHandle)successHandle
                    failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 获取广告信息
 
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)advertListWithSuccessHandle:(MGServiceSuccessHandle)successHandle
                     failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 我要卖车
 
 @param parameter <#parmeter description#>
 @param imageArray <#imageArray description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)saleCarWithParameter:(NSMutableDictionary*)parameter
                imageArray:(NSMutableArray*)imageArray
             successHandle:(MGServiceSuccessHandle)successHandle
             failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 我的收藏列表
 
 @param userId <#userId description#>
 @param page <#page description#>
 @param rows <#rows description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)myCollectListWithUserId:(NSString*)userId
                          page:(int)page
                          rows:(int)rows
                 successHandle:(MGServiceSuccessHandle)successHandle
                 failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 我的车辆
 
 @param userId <#userId description#>
 @param page <#page description#>
 @param rows <#rows description#>
 @param status <#status description#>
 @param saleStatus <#saleStatus description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)myCarsWirhUserId:(NSString*)userId
                   page:(int)page
                   rows:(int)rows
                 status:(NSNumber*)status
             saleStatus:(NSNumber*)saleStatus
          successHandle:(MGServiceSuccessHandle)successHandle
          failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 收藏
 
 @param userId <#userId description#>
 @param carId <#carId description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)collectWithUserId:(NSString*)userId
                   carId:(NSString*)carId
           successHandle:(MGServiceSuccessHandle)successHandle
           failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 取消收藏
 
 @param userId <#userId description#>
 @param carId <#carId description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)cancleCollectWithUserId:(NSString*)userId
                         carId:(NSString*)carId
                 successHandle:(MGServiceSuccessHandle)successHandle
                 failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 意见反馈
 
 @param userId <#userId description#>
 @param content <#content description#>
 @param phone <#phone description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)feedbackWithUserId:(NSString*)userId
                  content:(NSString*)content
                    phone:(NSString*)phone
            successHandle:(MGServiceSuccessHandle)successHandle
            failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 求购列表
 
 @param userId <#userId description#>
 @param page <#page description#>
 @param rows <#rows description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)needBuyListWithUserId:(NSString*)userId
                        page:(int)page
                        rows:(int)rows
               successHandle:(MGServiceSuccessHandle)successHandle
               failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 最新设备
 
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)newCarsWithSuccessHandle:(MGServiceSuccessHandle)successHandle
                  failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 热门浏览
 
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)hotCarsWithSuccessHandle:(MGServiceSuccessHandle)successHandle
                  failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 查询车辆
 
 @param parameter <#parameter description#>
 @param page <#page description#>
 @param rows <#rows description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)searchSaleCarWithParameter:(NSMutableDictionary*)parameter
                             page:(int)page
                             rows:(int)rows
                    successHandle:(MGServiceSuccessHandle)successHandle
                    failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 我买到的
 
 @param userId <#userId description#>
 @param page <#page description#>
 @param rows <#rows description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)myBuyCarsWithUserId:(NSString*)userId
                      page:(int)page
                      rows:(int)rows
             successHandle:(MGServiceSuccessHandle)successHandle
             failureHandle:(MGServiceFailureHandle)failureHandle;
/**
 我卖出的
 
 @param userId <#userId description#>
 @param page <#page description#>
 @param rows <#rows description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)mySaleCarsWithUserId:(NSString*)userId
                       page:(int)page
                       rows:(int)rows
              successHandle:(MGServiceSuccessHandle)successHandle
              failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 热门搜索
 
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)hotSearchWithSuccessHandle:(MGServiceSuccessHandle)successHandle
                    failureHandle:(MGServiceFailureHandle)failureHandle;


/**
 根据车辆id获取车辆信息
 
 @param carId <#carId description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */
-(void)carInfoWithCarId:(NSString*)carId
          successHandle:(MGServiceSuccessHandle)successHandle
          failureHandle:(MGServiceFailureHandle)failureHandle;

/**
 根据id判断用户是否为vip用户
 
 @param personId <#carId description#>
 @param successHandle <#successHandle description#>
 @param failureHandle <#failureHandle description#>
 */

-(void)judgeVipWithPersonId:(NSString*)personId
          successHandle:(MGServiceSuccessHandle)successHandle
          failureHandle:(MGServiceFailureHandle)failureHandle;


-(void)myWantBuyMessageListWithUserId:(NSString*)userId
                                 page:(int)page
                                 rows:(int)rows
                        successHandle:(MGServiceSuccessHandle)successHandle
                        failureHandle:(MGServiceFailureHandle)failureHandle;

@end
