//
//  RCReloadView.h
//  RCReloadView
//
//  Created by Wangyefa on 2017/8/25.
//  Copyright © 2017年 血族. All rights reserved.
//  重新加载页面

#import <UIKit/UIKit.h>

// 提示图样式
typedef NS_ENUM(NSUInteger, ReloadStyle) {
	ReloadStyleCryPage = 0,
	ReloadStyleCryCube,
	ReloadStyleCryDrop,
	ReloadStyleCry,
	ReloadStyleEdginess,
	ReloadStyleError,
	ReloadStyleSad,
	ReloadStyleWifi,
	ReloadStylePop,
	ReloadStyleCross
};

typedef void (^ReloadBlock)(void);

@interface RCReloadView : UIView


/**
 提示信息
 */
@property (nonatomic, copy) NSString *desc;


/**
 自定义的图标
 */
@property (nonatomic, copy) NSString *customIcon;

/**
 初始化

 @param style 样式
 @param block 点击事件
 @return 实例
 */
- (instancetype)initWithType:(ReloadStyle)style desc:(NSString *)desc clickBlock:(ReloadBlock)block;


@end
