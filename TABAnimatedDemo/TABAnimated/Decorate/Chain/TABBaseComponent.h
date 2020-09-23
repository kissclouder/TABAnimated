//
//  TABBaseComponent.h
//  AnimatedDemo
//
//  github: https://github.com/tigerAndBull/TABAnimated
//  jianshu: https://www.jianshu.com/p/6a0ca4995dff
//
//  集成问答文档：https://www.jianshu.com/p/34417897915a
//  历史更新文档：https://www.jianshu.com/p/e3e9ea295e8a
//  动画下标说明：https://www.jianshu.com/p/8c361ba5aa18
//  豆瓣效果说明：https://www.jianshu.com/p/1a92158ce83a
//  嵌套视图说明：https://www.jianshu.com/p/cf8e37195c11
//
//  Created by tigerAndBull on 2019/7/16.
//  Copyright © 2019 tigerAndBull. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "TABComponentLayer.h"
#import "TABAnimatedChainDefines.h"

NS_ASSUME_NONNULL_BEGIN

@interface TABBaseComponent : NSObject

#pragma mark - 基础属性

/**
 向左平移

 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)left;

/**
 向右平移

 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)right;

/**
 向上平移

 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)up;

/**
 向下平移

 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)down;

/**
 设置动画元素的宽度

 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)width;

/**
 设置动画元素的高度

 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)height;

/**
 设置动画元素的圆角
 
 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)radius;

/**
 需要减少的宽度：与当前宽度相比，所减少的宽度
 负数则为增加
 
 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)reducedWidth;

/**
 减少的高度：与当前高度相比，所减少的高度
 负数则为增加
 
 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)reducedHeight;

/**
 减少的圆角
 
 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)reducedRadius;

/**
 设置横坐标
 
 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)x;

/**
 设置纵坐标
 
 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)y;

/**
 设置动画元素的行数

 @return 目标动画元素
 */
- (TABBaseComponentIntegerBlock)line;

/**
 设置多行动画元素的间距，即行数超过1时生效，默认为8.0。
 
 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)space;

/**
 对于`行数` > 1的动画元素，设置最后一行的宽度比例，默认是0.5，即原宽度的一半。
 
 @return 目标动画元素
 */
- (TABBaseComponentFloatBlock)lastLineScale;

/**
 从动画组中移除
 
 @return 目标动画元素
 */
- (TABBaseComponentVoidBlock)remove;

/**
 添加占位图，不支持圆角，建议切图使用圆角
 
 @return 目标动画元素
 */
- (TABBaseComponentStringBlock)placeholder;

/**
 如果动画元素来自居中文本，设置后取消居中显示，
 
 @return 目标动画元素
 */
- (TABBaseComponentVoidBlock)cancelAlignCenter;

/**
 设置动画元素颜色

 @return 目标动画元素
 */
- (TABBaseComponentColorBlock)color;

/**
 该元素不添加附加动画
 */
- (TABBaseComponentVoidBlock)withoutAnimation;

#pragma mark -

/// 需要调整的元素左部 等于 传入的元素的左部
/// 参数tag：传入比较的tag
/// 用法 manager.animation(1).leftEqualTo(2), 意为 目标元素1的横坐标等于元素2的横坐标
- (TABBaseComponentCompareBlock)leftEqualTo;

/// 需要调整的元素右部 等于 传入的元素的右部
/// 参数tag：传入比较的tag
- (TABBaseComponentCompareBlock)rightEqualTo;

/// 需要调整的元素顶部等于 传入的元素的顶部
/// 参数tag：传入比较的tag
- (TABBaseComponentCompareBlock)topEqualTo;

/// 需要调整的元素底部 等于 传入的元素的底部
/// 参数tag：传入比较的tag
- (TABBaseComponentCompareBlock)bottomEqualTo;

/// 需要调整的元素宽度 等于 传入的元素的宽度
/// 参数tag：传入比较的tag
- (TABBaseComponentCompareBlock)widthEqualTo;

/// 需要调整的元素高度 等于 传入的元素的高度
/// 参数tag：传入比较的tag
- (TABBaseComponentCompareBlock)heightEqualTo;

/// 需要调整的元素左部 等于 传入的元素的右部
/// 参数tag：传入比较的tag
- (TABBaseComponentCompareBlock)leftEqualToRight;

/// 需要调整的元素右部 等于 传入的元素的左部
/// 参数tag：传入比较的tag
- (TABBaseComponentCompareBlock)rightEqualToLeft;

/// 需要调整的元素顶部 等于 传入的元素的底部
/// 参数tag：传入比较的tag
- (TABBaseComponentCompareBlock)topEqualToBottom;

/// 需要调整的元素底部 等于 传入的元素的顶部
/// 参数tag：传入比较的tag
- (TABBaseComponentCompareBlock)bottomEqualToTop;

#pragma mark -

/// 偏移量offset：正数表示往右、往下偏移， 负数表示往左、往上偏移

/// 需要调整的元素左部 等于 传入的元素的左部
/// 参数tag：传入比较的tag
/// 参数offset：偏移量
/// 用法 manager.animation(1).leftEqualTo(2), 意为 目标元素1的横坐标等于元素2的横坐标
- (TABBaseComponentCompareWithOffsetBlock)leftEqualTo_offset;

/// 需要调整的元素右部 等于 传入的元素的右部
/// 参数tag：传入比较的tag
/// 参数offset：偏移量
- (TABBaseComponentCompareWithOffsetBlock)rightEqualTo_offset;

/// 需要调整的元素顶部等于 传入的元素的顶部
/// 参数tag：传入比较的tag
/// 参数offset：偏移量
- (TABBaseComponentCompareWithOffsetBlock)topEqualTo_offset;

/// 需要调整的元素底部 等于 传入的元素的底部
/// 参数tag：传入比较的tag
/// 参数offset：偏移量
- (TABBaseComponentCompareWithOffsetBlock)bottomEqualTo_offset;

/// 需要调整的元素宽度 等于 传入的元素的宽度
/// 参数tag：传入比较的tag
/// 参数offset：偏移量
- (TABBaseComponentCompareWithOffsetBlock)widthEqualTo_offset;

/// 需要调整的元素高度 等于 传入的元素的高度
/// 参数tag：传入比较的tag
/// 参数offset：偏移量
- (TABBaseComponentCompareWithOffsetBlock)heightEqualTo_offset;

/// 需要调整的元素左部 等于 传入的元素的右部
/// 参数tag：传入比较的tag
/// 参数offset：偏移量
- (TABBaseComponentCompareWithOffsetBlock)leftEqualToRight_offset;

/// 需要调整的元素右部 等于 传入的元素的左部
/// 参数tag：传入比较的tag
/// 参数offset：偏移量
- (TABBaseComponentCompareWithOffsetBlock)rightEqualToLeft_offset;

/// 需要调整的元素顶部 等于 传入的元素的底部
/// 参数tag：传入比较的tag
/// 参数offset：偏移量
- (TABBaseComponentCompareWithOffsetBlock)topEqualToBottom_offset;

/// 需要调整的元素底部 等于 传入的元素的顶部
/// 参数tag：传入比较的tag
/// 参数offset：偏移量 
- (TABBaseComponentCompareWithOffsetBlock)bottomEqualToTop_offset;

#pragma mark - Init Method

- (instancetype)initWithLayer:(TABComponentLayer *)layer manager:(TABComponentManager *)manager;
+ (instancetype)componentWithLayer:(TABComponentLayer *)layer manager:(TABComponentManager *)manager;

- (instancetype)init UNAVAILABLE_ATTRIBUTE;
+ (instancetype)new UNAVAILABLE_ATTRIBUTE;

@property (nonatomic, strong, readonly) TABComponentLayer *layer;

@end

NS_ASSUME_NONNULL_END
