//
//  Mine_BrickCell.h
//  BrickMan
//
//  Created by 段永瑞 on 16/7/26.
//  Copyright © 2016年 BrickMan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Mine_BrickModel.h"

static NSString * const kCellIdentifier_Mine_BrickCell = @"Mine_BrickCell";

@interface Mine_BrickCell : UITableViewCell

@property (nonatomic, strong) UILabel *rankingLbl, *nicknameLbl, *gradeLbl, *numberLbl;
@property (nonatomic, strong) UIImageView *headImgView;

+ (CGFloat)cellHeight;

@end
