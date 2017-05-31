//
//  WDLoadingView.h
//  TDMachine
//
//  Created by 何伟东 on 2017/4/18.
//  Copyright © 2017年 腾达二手机. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WDLoadingView : UIView
@property (weak, nonatomic) IBOutlet UIImageView *loadingImageView;
@property (weak, nonatomic) IBOutlet UIButton *retryButton;
@property (weak, nonatomic) IBOutlet UIImageView *falureImageView;
@property (weak, nonatomic) IBOutlet UILabel *retryTextlabel;

+(WDLoadingView*)loadingView;
-(void)showWithSuperView:(UIView*)superView;
-(void)hiddeLoading;
-(void)becomeRetry;

@end
