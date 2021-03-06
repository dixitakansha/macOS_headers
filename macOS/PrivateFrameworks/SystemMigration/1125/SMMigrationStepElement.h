//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <SystemMigration/SMMigrationEngineElement.h>

@class NSArray;

@interface SMMigrationStepElement : SMMigrationEngineElement
{
    NSArray *_steps;
    unsigned long long _phase;
    unsigned long long _stepFinishedBytes;
}

@property unsigned long long stepFinishedBytes; // @synthesize stepFinishedBytes=_stepFinishedBytes;
@property unsigned long long phase; // @synthesize phase=_phase;
@property __weak NSArray *steps; // @synthesize steps=_steps;
- (void).cxx_destruct;
- (id)phaseNameForPhase:(unsigned long long)arg1;
- (id)stepErrorWithException:(id)arg1;
- (id)errorWithMessage:(id)arg1;
- (double)estimateTimeRemaining;
- (double)estimatedTimeToComplete;
- (unsigned long long)completedSize;
- (void)calculateProgressPercentages:(double)arg1;
- (void)setProgressPortionsForStep:(id)arg1;
- (id)run;
- (id)description;
- (id)initWithEngine:(id)arg1 steps:(id)arg2 phase:(unsigned long long)arg3;

@end

