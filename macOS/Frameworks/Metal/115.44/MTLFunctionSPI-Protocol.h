//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Metal/MTLFunction-Protocol.h>

@class MTLFunctionReflection, MTLType, NSArray, NSString;

@protocol MTLFunctionSPI <MTLFunction>
@property(readonly) NSArray *arguments;
@property(readonly) MTLType *returnType;
@property(readonly) unsigned long long renderTargetArrayIndexType;
@property(readonly) long long lineNumber;
@property(readonly, copy) NSString *filePath;
- (void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(void (^)(MTLFunctionReflection *))arg2;
- (MTLFunctionReflection *)reflectionWithOptions:(unsigned long long)arg1;
@end

