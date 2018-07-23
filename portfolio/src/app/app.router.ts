import { ModuleWithProviders } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';

import { AppComponent } from './app.component';
import { AboutComponent } from './components/about/about.component';
import { WorkComponent } from './components/work/work.component';
import { ContactComponent } from './components/contact/contact.component';


export const router: Routes = [
  { path: '', redirectTo: 'home', pathMatch: 'full' },
  { path: 'about-me', component: AboutComponent },
  { path: 'work', component: WorkComponent },
  { path: 'contact', component: ContactComponent }
  // { path: '**', redirectTo: 'app-eagle-home' }

];

export const routes: ModuleWithProviders = RouterModule.forRoot(router);

