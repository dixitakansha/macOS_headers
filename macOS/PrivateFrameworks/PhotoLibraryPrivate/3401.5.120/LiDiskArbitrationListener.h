//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock;
@protocol LiDiskDelegate;

@interface LiDiskArbitrationListener : NSObject
{
    struct __DASession *_diskSession;
    id <LiDiskDelegate> _delegate;
    NSLock *_daSessionLock;
}

@property(retain, nonatomic) NSLock *daSessionLock; // @synthesize daSessionLock=_daSessionLock;
@property __weak id <LiDiskDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct __DASession *diskSession; // @synthesize diskSession=_diskSession;
- (void).cxx_destruct;
- (BOOL)disk:(struct __DADisk *)arg1 willUnmountOrEject:(unsigned char)arg2 dissentReason:(id *)arg3;
- (void)unregisterForDACallbacks;
- (void)registerForDACallbacks;
- (id)initWithDiskDelegate:(id)arg1;
- (id)init;
- (void)stopListening;
- (void)dealloc;

@end

