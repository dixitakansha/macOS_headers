//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FBAManagedFeedbackObject.h"

@class NSArray, NSOrderedSet, NSString;

@interface FBAQuestionGroup : FBAManagedFeedbackObject
{
}

@property(retain) NSArray *questions;
- (id)questionWithRole:(id)arg1;
- (id)description;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *primitiveQuestions; // @dynamic primitiveQuestions;
@property(retain) NSString *textAsHTML; // @dynamic textAsHTML;
@property(retain) NSString *title; // @dynamic title;

@end

