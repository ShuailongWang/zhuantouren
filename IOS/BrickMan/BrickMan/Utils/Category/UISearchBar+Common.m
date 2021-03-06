//
//  UISearchBar+Common.m
//  BrickMan
//
//  Created by TZ on 16/8/25.
//  Copyright © 2016年 BrickMan. All rights reserved.
//

#import "UISearchBar+Common.h"

@implementation UISearchBar (Common)

- (void)insertBGColor:(UIColor *)backgroundColor{
    static NSInteger customBgTag = 999;
    UIView *realView = [[self subviews] firstObject];
    [[realView subviews] enumerateObjectsUsingBlock:^(UIView *obj, NSUInteger idx, BOOL *stop) {
        if (obj.tag == customBgTag) {
            [obj removeFromSuperview];
        }
    }];
    if (backgroundColor) {
        UIImageView *customBg = [[UIImageView alloc] initWithImage:[UIImage imageWithColor:backgroundColor withFrame:CGRectMake(0, 0, CGRectGetWidth(self.frame), CGRectGetHeight(self.frame) + 20)]];
        [customBg setY:-20];
        customBg.tag = customBgTag;
        [[[self subviews] firstObject] insertSubview:customBg atIndex:1];
    }
}

@end
