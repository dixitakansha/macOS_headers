//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (RCAdditions)
+ (id)rc_dictionaryFromJSON:(id)arg1;
+ (id)rc_dictionaryFromJSON:(id)arg1 error:(id *)arg2;
+ (id)rc_dictionaryFromData:(id)arg1 error:(id *)arg2;
- (id)rc_subdictionaryForKeys:(id)arg1;
- (id)rc_dictionaryByTransformingValuesWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
- (id)rc_dictionaryByTransformingKeysWithKeyAndValueBlock:(CDUnknownBlockType)arg1;
@end

