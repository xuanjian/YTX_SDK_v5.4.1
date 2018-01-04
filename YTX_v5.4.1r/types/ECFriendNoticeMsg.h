//
//  ECFriendNoticeMsg.h
//  CCPiPhoneSDK
//
//  Created by huangjue on 2017/8/31.
//  Copyright © 2017年 ronglian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ECBaseNoticeMsg.h"

typedef NS_ENUM(NSUInteger,ECFriendNoticeMsg_Type) {
    
    ECFriendNoticeMsg_Type_None,
    
    /** 添加好友通知 */
    ECFriendNoticeMsg_Type_AddFriend = 0,
    
    /** 直接成为好友通知 */
    ECFriendNoticeMsg_Type_BecomeFriend,
    
    /** 同意好友请求通知 */
    ECFriendNoticeMsg_Type_AgreeFriend,
    
    /** 拒绝好友通知 */
    ECFriendNoticeMsg_Type_RejectFriend,
    
    /** 删除好友通知 */
    ECFriendNoticeMsg_Type_DeleteFriend,
} ;


@interface ECFriendNoticeMsg : ECBaseNoticeMsg

/**
 @brief 通知消息类型
 */
@property (nonatomic, assign) ECFriendNoticeMsg_Type type;

/**
 @brief 消息的发送者
 */
@property (nonatomic, copy) NSString *sender;

/**
 @brief 好友的账号
 */
@property (nonatomic, copy) NSString *friendAccount;

/**
 @brief 还有头像地址
 */
@property (nonatomic, copy) NSString *avatarUrl;

/**
 @brief 通知消息内容
 */
@property (nonatomic, copy) NSString *noticeMsg;

/**
 @brief 好友来源
 */
@property (nonatomic, copy) NSString *source;


/**
 @brief 是否处理好友请求 0 未处理 1 已处理，好友关系 2 已处理，非好友关系（拒绝）
 */
@property (nonatomic, assign) NSInteger friendState;

/**
 @brief 昵称
 */
@property (nonatomic, copy) NSString *nickName;

/**
 @brief 备注
 */
@property (nonatomic, copy) NSString *remarkName;
@end
