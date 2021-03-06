//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CloudPhotoLibrary/NSObject-Protocol.h>

@class NSString;

@protocol CPLEngineComponent <NSObject>
- (NSString *)componentName;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)openWithCompletionHandler:(void (^)(NSError *))arg1;

@optional
- (void)getStatusDictionaryWithCompletionHandler:(void (^)(NSDictionary *, NSError *))arg1;
- (void)getStatusWithCompletionHandler:(void (^)(NSString *, NSError *))arg1;
@end

