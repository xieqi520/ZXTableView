//
//  ZXTestSingleTbCell.h
//  ZXTableViewDemo
//
//  Created by 李兆祥 on 2019/3/30.
//  Copyright © 2019 李兆祥. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZXTestSingleTbCell : UITableViewCell
@property (copy,nonatomic)void (^delBlock)(void);
@end

NS_ASSUME_NONNULL_END
