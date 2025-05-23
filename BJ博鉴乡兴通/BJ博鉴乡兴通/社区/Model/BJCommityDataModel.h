//
//  BJCommityDataModel.h
//  BJ博鉴乡兴通
//
//  Created by nanxun on 2025/3/19.
//

#import <Foundation/Foundation.h>
#import "YYModel/YYModel.h"
NS_ASSUME_NONNULL_BEGIN
@class UIImage;
@interface BJCommityDataModel : NSObject <YYModel>
@property (nonatomic, assign) NSInteger postId;
@property (nonatomic, copy) NSString* avatar;
@property (nonatomic, copy) NSString* username;
@property (nonatomic, copy) NSString* title;
@property (nonatomic, copy) NSString* content;
@property (nonatomic, assign) NSInteger imageCount;
@property (nonatomic, copy) NSArray* images;
@property (nonatomic, assign) NSInteger userId;
@property (nonatomic, assign) NSInteger favoriteCount;
@property (nonatomic, assign) NSInteger commentCount;
@property (nonatomic, assign) BOOL isFavorite;
@property (nonatomic, assign) BOOL isFollowing;
@property (nonatomic, copy) NSString* timeString;
@property (nonatomic, assign)CGSize imageSize;
@property (nonatomic, strong)UIImage *pageImage;
@end

NS_ASSUME_NONNULL_END
