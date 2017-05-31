//
//  NSString+TD.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/8.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (TD)
/**
 图片url
 
 @return <#return value description#>
 */
-(NSURL*)td_imageUrl;
-(NSURL*)td_imageUrl_w:(CGFloat)w;
-(NSURL*)td_imageUrl_h:(CGFloat)h;
-(NSURL*)td_imageUrl_w:(CGFloat)w h:(CGFloat)h;
-(NSURL *)td_imageUrl_wAndh;
@end
