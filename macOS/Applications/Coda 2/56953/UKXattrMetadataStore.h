//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface UKXattrMetadataStore : NSObject
{
}

+ (id)stringForKey:(id)arg1 atPath:(id)arg2 traverseLink:(BOOL)arg3;
+ (id)objectForKey:(id)arg1 atPath:(id)arg2 traverseLink:(BOOL)arg3;
+ (id)dataForKey:(id)arg1 atPath:(id)arg2 traverseLink:(BOOL)arg3;
+ (void)setString:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 traverseLink:(BOOL)arg4;
+ (void)setObject:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 traverseLink:(BOOL)arg4;
+ (void)removeDataForKey:(id)arg1 atPath:(id)arg2 traverseLink:(BOOL)arg3;
+ (void)setData:(id)arg1 forKey:(id)arg2 atPath:(id)arg3 traverseLink:(BOOL)arg4;
+ (id)allKeysAtPath:(id)arg1 traverseLink:(BOOL)arg2;

@end

