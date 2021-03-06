//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAMovieTimeInspectorPaneController.h"

@class NSArrayController, NSTextField, TMAMovieTimeFormatter, TMATrimControl;

@interface TMAMovieStartStopTimeInspectorPaneController : TMAMovieTimeInspectorPaneController
{
    TMATrimControl *_trimControl;
    NSTextField *_startTimeLabel;
    NSTextField *_startTimeField;
    TMAMovieTimeFormatter *_startTimeFormatter;
    NSTextField *_endTimeLabel;
    NSTextField *_endTimeField;
    TMAMovieTimeFormatter *_endTimeFormatter;
    NSArrayController *_movieInfoController;
    NSArrayController *_movieTimePropertyController;
}

@property(retain, nonatomic) NSArrayController *movieTimePropertyController; // @synthesize movieTimePropertyController=_movieTimePropertyController;
@property(retain, nonatomic) NSArrayController *movieInfoController; // @synthesize movieInfoController=_movieInfoController;
@property(retain, nonatomic) TMAMovieTimeFormatter *endTimeFormatter; // @synthesize endTimeFormatter=_endTimeFormatter;
@property(retain, nonatomic) NSTextField *endTimeField; // @synthesize endTimeField=_endTimeField;
@property(retain, nonatomic) NSTextField *endTimeLabel; // @synthesize endTimeLabel=_endTimeLabel;
@property(retain, nonatomic) TMAMovieTimeFormatter *startTimeFormatter; // @synthesize startTimeFormatter=_startTimeFormatter;
@property(retain, nonatomic) NSTextField *startTimeField; // @synthesize startTimeField=_startTimeField;
@property(retain, nonatomic) NSTextField *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
@property(retain, nonatomic) TMATrimControl *trimControl; // @synthesize trimControl=_trimControl;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)arg1;
- (void)loadView;
- (id)nibName;

@end

