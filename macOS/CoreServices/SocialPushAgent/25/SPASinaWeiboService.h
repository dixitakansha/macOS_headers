//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "SPAService.h"

@interface SPASinaWeiboService : SPAService
{
}

- (id)notificationCenterBundleID;
- (id)destroyParametersForUUID:(id)arg1;
- (id)destroyURLForUUID:(id)arg1;
- (id)listURL;
- (id)registrationURL;
- (id)acAccountType;
- (id)urlForActivateNotification:(id)arg1;
- (void)handleAPSConnectionMessageForTopic:(id)arg1 userInfo:(id)arg2;
- (void)unregisterCurrentUUID;
- (BOOL)unregisterAccount:(id)arg1 uuid:(id)arg2;
- (id)registeredPushDestinationsFromProviderWithAccount:(id)arg1;
- (unsigned long long)currentPushSettings;
- (id)registrationPlistPath;
- (void)registerForPushNotificationsAndUpdatePersistFileWithDeviceToken:(id)arg1 UUID:(id)arg2 account:(id)arg3 enabledFor:(unsigned long long)arg4;
- (id)initWithServiceType:(id)arg1 accountStore:(id)arg2;

@end

