//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CKPushNotificationManager, NSError;

@protocol CKPushNotificationManagerDelegate <NSObject>
- (void)pushNotificationManager:(CKPushNotificationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)pushNotificationManagerDidChange:(CKPushNotificationManager *)arg1;
- (void)pushNotificationManagerDidSucceed:(CKPushNotificationManager *)arg1;
@end

