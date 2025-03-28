//
//  BJMymagesInDraftModel.h
//  BJ博鉴乡兴通
//
//  Created by nanxun on 2025/3/22.
//

#import <Foundation/Foundation.h>
#import "DatabaseProtocol.h"
@protocol WCTTableCoding;
NS_ASSUME_NONNULL_BEGIN

@interface BJMymagesInDraftModel : NSObject <DatabaseProtocol, WCTTableCoding>
@property (nonatomic, assign) NSInteger noteId;
@property (nonatomic, copy) NSString* imageFilePath;
@property (nonatomic, assign) NSInteger imageId;
@end

NS_ASSUME_NONNULL_END
