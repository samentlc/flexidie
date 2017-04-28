/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"
//
//#import "FBClassProvidable-Protocol.h"

@class ACAccount, FBAccountStore, FBRequester;

@interface FBSSOLoginController : NSObject //<FBClassProvidable>
{
//    id <FBProvider> _requestProvider;
//    id <FBAPISessionStore> _sessionStore;
    FBRequester *_requester;
    FBAccountStore *_accountStore;
    ACAccount *_account;
    id _finishedBlock;
}

@property(copy, nonatomic) id finishedBlock; // @synthesize finishedBlock=_finishedBlock;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
@property(readonly, nonatomic) FBAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(retain, nonatomic) FBRequester *requester; // @synthesize requester=_requester;
//@property(readonly, nonatomic) id <FBAPISessionStore> sessionStore; // @synthesize sessionStore=_sessionStore;
//@property(readonly, nonatomic) id <FBProvider> requestProvider; // @synthesize requestProvider=_requestProvider;
- (void)_loginCleanup;
- (void)requester:(id)arg1 didFinishWithResult:(id)arg2;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)performSSOLoginWithAccount:(id)arg1 finished:(id)arg2;
- (id)initWithProviderMapData:(id)arg1;
- (void)dealloc;
- (id)initWithRequestProvider:(id)arg1 apiSessionStore:(id)arg2;
- (id)init;

@end
