//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Parsec/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol PRSSupervisedLearning <NSObject>
- (void)addResultToTrainingData:(id)arg1 query:(NSString *)arg2;
- (void)purgeDataOlderThanTime:(double)arg1;
- (void)purgeAllData;
- (id)getTopHitForQuery:(NSString *)arg1 results:(NSArray *)arg2;
- (void)updateModel;
- (id)initWithTrainingDBFilePath:(NSString *)arg1 modelDBFilePath:(NSString *)arg2;
@end

