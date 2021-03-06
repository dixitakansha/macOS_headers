//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsFoundation/NSObject-Protocol.h>

@class NFCallbackScope, NSString, Protocol;

@protocol NFCallbackRegistration <NSObject>
- (void)whenUnsafeResolvingWithKey:(NSString *)arg1 scope:(NFCallbackScope *)arg2 callbackBlock:(void (^)(id, id <NFResolver>))arg3;
- (void)whenResolvingProtocol:(Protocol *)arg1 scope:(NFCallbackScope *)arg2 callbackBlock:(void (^)(id, id <NFResolver>))arg3;
- (void)whenResolvingClass:(Class)arg1 scope:(NFCallbackScope *)arg2 callbackBlock:(void (^)(id, id <NFResolver>))arg3;
@end

