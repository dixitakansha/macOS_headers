//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

@class NSDate, NSString;

@protocol WMStorageProtocol
- (BOOL)synchronize;
- (void)setDate:(NSDate *)arg1 forKey:(NSString *)arg2;
- (NSDate *)dateForKey:(NSString *)arg1;
- (void)setBool:(BOOL)arg1 forKey:(NSString *)arg2;
- (BOOL)boolForKey:(NSString *)arg1;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2;
- (long long)integerForKey:(NSString *)arg1;
@end

