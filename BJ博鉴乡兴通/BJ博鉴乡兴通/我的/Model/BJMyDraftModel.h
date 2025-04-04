//
//  BJMyDraftModel.h
//  BJ博鉴乡兴通
//
//  Created by nanxun on 2025/3/22.
//

#import <Foundation/Foundation.h>
#import "DatabaseProtocol.h"
@protocol WCTTableCoding;
NS_ASSUME_NONNULL_BEGIN

@interface BJMyDraftModel : NSObject <DatabaseProtocol, WCTTableCoding>
@property (nonatomic, copy) NSString* titleString;
@property (nonatomic, copy) NSString* contentString;
@property (nonatomic, copy) NSString* email;
@property (nonatomic, assign) NSInteger noteId;

@end

NS_ASSUME_NONNULL_END
