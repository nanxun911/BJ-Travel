//
//  BJPostTableViewCell.h
//  BJ博鉴乡兴通
//
//  Created by nanxun on 2025/2/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface BJPostTableViewCell : UITableViewCell
@property (nonatomic, strong) UITextField* titleView;
@property (nonatomic, strong) UITextView* contentTextView;
@property (nonatomic, strong) UIButton* btn;
@property (nonatomic, strong) UIScrollView* buttonScrollView;
@property (nonatomic, strong) UIImageView* icon;
- (void)addPhotosAry:(NSArray<UIImage*>*)imageAry;
@end

NS_ASSUME_NONNULL_END
