//
//  Mine_infoCell.h
//  BrickMan
//
//  Created by 段永瑞 on 16/7/22.
//  Copyright © 2016年 BrickMan. All rights reserved.
//

#define kCellIdentifier_Mine_infoCell @"Mine_infoCell"
#import <UIKit/UIKit.h>

@interface Mine_infoCell : UITableViewCell

@property (nonatomic, strong) UILabel *titleLabel;

@property (nonatomic, strong) UILabel *subLabel;

@property (nonatomic, strong) UIImageView *subImgView;

+ (CGFloat)cellHeight;

@end
