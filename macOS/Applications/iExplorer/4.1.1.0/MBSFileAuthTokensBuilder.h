//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ProtocolBuffers/PBGeneratedMessageBuilder.h>

@class MBSFileAuthTokens;

__attribute__((visibility("hidden")))
@interface MBSFileAuthTokensBuilder : PBGeneratedMessageBuilder
{
    MBSFileAuthTokens *result;
}

@property(retain) MBSFileAuthTokens *result; // @synthesize result;
- (void).cxx_destruct;
- (id)clearTokens;
- (id)setTokensArray:(id)arg1;
- (id)addTokens:(id)arg1;
- (id)tokensAtIndex:(unsigned long long)arg1;
- (id)tokens;
- (id)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (id)mergeFromCodedInputStream:(id)arg1;
- (id)mergeFrom:(id)arg1;
- (id)buildPartial;
- (id)build;
- (id)defaultInstance;
- (id)clone;
- (id)clear;
- (id)internalGetResult;
- (id)init;

@end

