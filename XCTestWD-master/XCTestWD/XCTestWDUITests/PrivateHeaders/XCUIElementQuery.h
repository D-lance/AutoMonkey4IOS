//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CDStructures.h"
#import <XCTest/XCUIElementQuery.h>

@class NSArray, NSOrderedSet, NSString, XCUIApplication, XCUIElement;

@interface XCUIElementQuery ()
{
    BOOL _changesScope;
    NSString *_queryDescription;
    XCUIElementQuery *_inputQuery;
    CDUnknownBlockType _filter;
    unsigned long long _expressedType;
    NSArray *_expressedIdentifiers;
    NSOrderedSet *_lastInput;
    NSOrderedSet *_lastOutput;
}

@property(copy) NSOrderedSet *lastOutput; // @synthesize lastOutput=_lastOutput;
@property(copy) NSOrderedSet *lastInput; // @synthesize lastInput=_lastInput;
@property(copy) NSArray *expressedIdentifiers; // @synthesize expressedIdentifiers=_expressedIdentifiers;
@property unsigned long long expressedType; // @synthesize expressedType=_expressedType;
@property BOOL changesScope; // @synthesize changesScope=_changesScope;
@property(readonly, copy) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly) XCUIElementQuery *inputQuery; // @synthesize inputQuery=_inputQuery;
@property(readonly, copy) NSString *queryDescription; // @synthesize queryDescription=_queryDescription;
@property(readonly, copy) NSString *elementDescription;
@property(readonly) XCUIApplication *application;

- (id)matchingSnapshotsWithError:(id *)arg1;
- (id)matchingSnapshotsHandleUIInterruption:(BOOL)arg1 withError:(id *)arg2;
- (id)_elementMatchingAccessibilityElementOfSnapshot:(id)arg1;

- (id)_containingPredicate:(id)arg1 queryDescription:(id)arg2;
- (id)_predicateWithType:(unsigned long long)arg1 identifier:(id)arg2;
- (id)_queryWithPredicate:(id)arg1;
- (id)sorted:(CDUnknownBlockType)arg1;
- (id)descending:(unsigned long long)arg1;
- (id)ascending:(unsigned long long)arg1;
- (id)filter:(CDUnknownBlockType)arg1;
- (id)_debugInfoWithIndent:(id *)arg1;
- (id)_derivedExpressedIdentifiers;
- (unsigned long long)_derivedExpressedType;
- (id)initWithInputQuery:(id)arg1 queryDescription:(id)arg2 filter:(CDUnknownBlockType)arg3;

@end
