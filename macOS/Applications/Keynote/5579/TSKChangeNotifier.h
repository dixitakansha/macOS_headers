//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue;

@interface TSKChangeNotifier : NSObject
{
    NSMapTable *_changeSourceOfObjectObservers;
    NSMapTable *_changeSourceOfClassObservers;
    NSObject<OS_dispatch_queue> *_currentlyNotifyingLock;
    long long _currentlyNotifyingCount;
    NSMapTable *_objectObserversToCheckForRemovalAfterNotifications;
    NSMapTable *_classObserversToCheckForRemovalAfterNotifications;
}

- (void).cxx_destruct;
- (void)processChanges:(id)arg1;
- (void)preprocessChanges:(id)arg1;
- (void)p_trimChangeSourceToCountedObserversMap:(id)arg1;
- (void)p_removeDeallocatedObserversFromArray:(id)arg1;
- (void)p_removeZeroCountObserversInMap:(id)arg1 fromCountedObserversByChangeSourceMap:(id)arg2;
- (void)p_processChanges:(id)arg1 preprocessing:(BOOL)arg2;
- (void)removeObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;
- (void)addObserver:(id)arg1 forChangeSourceOfClass:(Class)arg2;
- (void)removeObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)addObserver:(id)arg1 forChangeSource:(id)arg2;
- (void)p_removeObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(BOOL)arg3;
- (void)p_addObserver:(id)arg1 forChangeSource:(id)arg2 isClass:(BOOL)arg3;
- (id)p_findCountedObserverForObserver:(id)arg1 inArray:(id)arg2;
- (id)init;

@end

