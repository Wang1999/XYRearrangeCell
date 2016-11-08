//
//  UICollectionView+RollView.h
//  XYRrearrangeCell
//  GitHub: https://github.com/Ossey/XYRearrangeCell
//  Created by mofeini on 16/11/8.
//  Copyright © 2016年 com.test.demo. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIView+RollView.h"

@interface UICollectionView (RollView)

// cell拖拽到屏幕边缘时，其他cell的滚动速度，数值越大滚动越快，默认为5.0，注意临界点的值，如果要设置为0时，设置为0.01才有效
@property CGFloat cellAutoRollSpeed;

//- (nonnull instancetype)initWithcollectionView:(nonnull UICollectionViewLayout *)layout LayoutOriginalDataBlock:(nullable XYRollOriginalDataBlock)originalDataBlock callBlckNewDataBlock:(nullable XYRollNewDataBlock)newDataBlock;
@end