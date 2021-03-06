//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSOperationQueue;

@interface CKDAccountNotifier : NSObject
{
    int _accountChangedToken;
    NSMapTable *_notificationObservers;
    NSOperationQueue *_notifyQueue;
}

+ (id)sharedNotifier;
@property(retain, nonatomic) NSOperationQueue *notifyQueue; // @synthesize notifyQueue=_notifyQueue;
@property(retain, nonatomic) NSMapTable *notificationObservers; // @synthesize notificationObservers=_notificationObservers;
@property(nonatomic) int accountChangedToken; // @synthesize accountChangedToken=_accountChangedToken;
- (void).cxx_destruct;
- (void)unregisterObserverForAccountChangeNotification:(id)arg1;
- (void)registerObserver:(id)arg1 forAccountChangeNotification:(CDUnknownBlockType)arg2;
- (void)postAccountChangedNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

