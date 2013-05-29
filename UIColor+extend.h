//
//  UIColor+extend.h
//
//  Created by allen on 13-5-15.
//  Copyright 2010 epro. All rights reserved.
//

#import <Foundation/Foundation.h>

// 扩展UIColor类
@interface UIColor(extend)

// 将十六进制的颜色值转为objective-c的颜色
+ (UIColor *)getColor:(NSString *) hexColor;


/*!
@method
@abstract 将十六进制的颜色值转为objective-c的颜色,并且可以设置透明度
@param hexColor 颜色值 例：CCCCCC
@param alpha    透明度 例：0.5f
@result UIColor
*/
+ (UIColor *)getColor:(NSString *) hexColor alpha:(float)alpha;

@end
